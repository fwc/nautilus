/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8497
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8497
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
void test(val<signed char> var_4, val<unsigned long long int> var_13, val<signed char> var_16, val<int> zero, val<unsigned short*> var_18, val<int*> var_19, val<unsigned char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned short>) var_4);
    *var_19 += ((/* implicit */val<int>) var_16);
    *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) ((min((var_13), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)170)))) < (((/* implicit */val<unsigned long long int>) (((+(1982106921))) & (((((/* implicit */val<int>) (val<unsigned char>)86)) - (((/* implicit */val<int>) (val<unsigned char>)194))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-8;
unsigned long long int var_13 = 6016967953979761376ULL;
signed char var_16 = (signed char)74;
int zero = 0;
unsigned short var_18 = (unsigned short)14463;
int var_19 = 2054166659;
unsigned char var_20 = (unsigned char)129;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)65528;
    value_mismatch |= var_19 != 2054166733;
    value_mismatch |= var_20 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
