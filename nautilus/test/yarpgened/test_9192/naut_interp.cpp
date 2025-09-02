/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9192
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
void test(val<unsigned char> var_5, val<unsigned char> var_8, val<unsigned short> var_10, val<unsigned int> var_13, val<int> zero, val<unsigned char*> var_18, val<unsigned long long int*> var_19, val<short*> var_20) {
    *var_18 = var_5;
    *var_19 |= ((/* implicit */val<unsigned long long int>) var_10);
    *var_20 = ((/* implicit */val<short>) min(((+(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)39555))) & (4419122418223174365ULL))) == (((val<unsigned long long int>) var_13)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)39;
unsigned char var_8 = (unsigned char)201;
unsigned short var_10 = (unsigned short)32419;
unsigned int var_13 = 155488976U;
int zero = 0;
unsigned char var_18 = (unsigned char)170;
unsigned long long int var_19 = 7370458684333864869ULL;
short var_20 = (short)25435;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)39;
    value_mismatch |= var_19 != 7370458684333883303ULL;
    value_mismatch |= var_20 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_10, var_13, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
