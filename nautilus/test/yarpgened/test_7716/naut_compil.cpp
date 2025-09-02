/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7716
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7716
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
void test(val<unsigned char> var_3, val<unsigned short> var_5, val<unsigned char> var_7, val<unsigned int> var_13, val<unsigned char> var_18, val<int> zero, val<unsigned long long int*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<int*> var_22) {
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned short>)41283)))))
    {
        *var_19 = ((/* implicit */val<unsigned long long int>) var_5);
        *var_20 = ((/* implicit */val<long long int>) max((*var_20), (((/* implicit */val<long long int>) (val<unsigned short>)41272))));
        *var_21 ^= ((/* implicit */val<unsigned int>) var_3);
    }

    *var_22 -= ((/* implicit */val<int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))) & (var_13))) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)109;
unsigned short var_5 = (unsigned short)30761;
unsigned char var_7 = (unsigned char)249;
unsigned int var_13 = 1953131512U;
unsigned char var_18 = (unsigned char)187;
int zero = 0;
unsigned long long int var_19 = 12424549495432408152ULL;
long long int var_20 = 4480104504049201651LL;
unsigned int var_21 = 3135002024U;
int var_22 = 1501284916;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 30761ULL;
    value_mismatch |= var_20 != 4480104504049201651LL;
    value_mismatch |= var_21 != 3135002053U;
    value_mismatch |= var_22 != 1501284915;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_13, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
