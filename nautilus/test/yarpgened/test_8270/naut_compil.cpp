/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8270
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8270
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<unsigned char> var_4, val<unsigned char> var_7, val<int> var_11, val<unsigned char> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned long long int*> var_16, val<unsigned char*> var_17) {
    *var_16 = max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) == (var_14)))), (((min((var_2), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)162)))) << (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) <= (((/* implicit */val<int>) var_13))))))));
    *var_17 = ((/* implicit */val<unsigned char>) max((*var_17), (((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) var_7)), ((-(((((/* implicit */val<bool>) 1348970604)) ? (var_11) : (((/* implicit */val<int>) var_0)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5872;
unsigned long long int var_2 = 3294178036090306465ULL;
unsigned char var_4 = (unsigned char)20;
unsigned char var_7 = (unsigned char)236;
int var_11 = 103288727;
unsigned char var_13 = (unsigned char)176;
unsigned long long int var_14 = 13423296615595618636ULL;
int zero = 0;
unsigned long long int var_16 = 7254524310972256514ULL;
unsigned char var_17 = (unsigned char)229;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 324ULL;
    value_mismatch |= var_17 != (unsigned char)229;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, var_11, var_13, var_14, zero, &var_16, &var_17);
  checksum();
}
