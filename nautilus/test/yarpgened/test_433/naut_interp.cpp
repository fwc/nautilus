/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 433
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=433
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_8, val<unsigned long long int> var_10, val<unsigned char> var_18, val<int> zero, val<int*> var_19, val<signed char*> var_20, val<bool*> var_21) {
    *var_19 = ((((/* implicit */val<bool>) (val<unsigned short>)65515)) ? (((/* implicit */val<int>) (val<signed char>)-89)) : (((/* implicit */val<int>) (val<signed char>)-88)));
    *var_20 = ((/* implicit */val<signed char>) min((((((((/* implicit */val<int>) (val<signed char>)89)) + (((/* implicit */val<int>) (val<unsigned char>)0)))) * (max((var_8), (((/* implicit */val<int>) (val<signed char>)89)))))), (((/* implicit */val<int>) var_18))));
    *var_21 = ((/* implicit */val<bool>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -447104296;
unsigned long long int var_10 = 980771050127419593ULL;
unsigned char var_18 = (unsigned char)138;
int zero = 0;
int var_19 = 493842627;
signed char var_20 = (signed char)-30;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -89;
    value_mismatch |= var_20 != (signed char)-118;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_10, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
