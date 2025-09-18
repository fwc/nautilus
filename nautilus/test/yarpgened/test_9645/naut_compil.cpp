/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9645
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9645
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned long long int> var_11, val<signed char> var_14, val<int> zero, val<signed char*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<unsigned short>)45842)), (1156485381169002601LL)))), (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)45835)), (var_11)))))) ? (13260746037897307629ULL) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_14)) || (((/* implicit */val<bool>) (val<unsigned char>)81))))), (((-5256513387515950993LL) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)45844))))))))));
    *var_17 = ((/* implicit */val<unsigned short>) (val<unsigned char>)81);
    *var_18 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)46371);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 16192123340676385765ULL;
signed char var_14 = (signed char)-2;
int zero = 0;
signed char var_16 = (signed char)-91;
unsigned short var_17 = (unsigned short)43706;
unsigned long long int var_18 = 14874931195667499887ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-19;
    value_mismatch |= var_17 != (unsigned short)81;
    value_mismatch |= var_18 != 46371ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
