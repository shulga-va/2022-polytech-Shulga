#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "json.h"
#include <doctest.h>
#include <iostream>
#include <unordered_map>

TEST_CASE("Generic tests") {
  CHECK_EQ(Json{unordered_map<string, BasicToken>{}}.serialize(),
           "{}");

  CHECK_EQ(
      Json{unordered_map<string, BasicToken>{
               {"int_token", NumToken(9090)},
               {"str_token", StringToken("hi")},
               {"bool_token", BoolToken(true)},
               {"array_token", ArrayToken({NumToken(1), StringToken("ok")})}}}
          .serialize(),
      "{\"bool_token\":true,\"str_token\":\"hi\",\"array_token\":[1,\"ok\"],"
      "\"int_token\":9090}");

  CHECK_EQ(Json{unordered_map<string, BasicToken>{
                    {"str_token", StringToken("val")}}}
               .serialize(),
           "{\"str_token\":\"val\"}");

  CHECK_EQ(Json{unordered_map<string, BasicToken>{
                    {"int_token", NumToken(999999)}}}
               .serialize(),
           "{\"int_token\":999999}");

  CHECK_EQ(Json{unordered_map<string, BasicToken>{
                    {"bool_token", BoolToken(true)}}}
               .serialize(),
           "{\"bool_token\":true}");

  CHECK_EQ(
      Json{unordered_map<string, BasicToken>{
               {"array_token", ArrayToken({NumToken(1), StringToken("ok")})}}}
          .serialize(),
      "{\"array_token\":[1,\"ok\"]}");
}
