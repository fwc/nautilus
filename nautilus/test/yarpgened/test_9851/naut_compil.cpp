/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9851
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9851
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
void test(val<short> var_0, val<unsigned int> var_2, val<unsigned long long int> var_3, val<bool> var_4, val<short> var_8, val<int> zero, val<unsigned char*> var_10, val<long long int*> var_11, val<short*> var_12, val<long long int*> var_13) {
    if (((/* implicit */val<bool>) var_8))
    {
        *var_10 = ((/* implicit */val<unsigned char>) ((101816353U) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)192)))));
        *var_11 = ((/* implicit */val<long long int>) ((val<signed char>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_2))) ? ((-(((/* implicit */val<int>) (val<unsigned char>)192)))) : (((/* implicit */val<int>) var_4)))));
    }

    *var_12 = ((/* implicit */val<short>) ((val<int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (val<short>)25764)), (var_3)))) || (var_4))));
    *var_13 -= ((/* implicit */val<long long int>) ((val<unsigned short>) var_0));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12882;
unsigned int var_2 = 1922514891U;
unsigned long long int var_3 = 17582462411611527443ULL;
bool var_4 = (bool)0;
short var_8 = (short)2794;
int zero = 0;
unsigned char var_10 = (unsigned char)155;
long long int var_11 = 3061287261412832595LL;
short var_12 = (short)12778;
long long int var_13 = 2311958397025565178LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)0;
    value_mismatch |= var_11 != 64LL;
    value_mismatch |= var_12 != (short)1;
    value_mismatch |= var_13 != 2311958397025512524LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
