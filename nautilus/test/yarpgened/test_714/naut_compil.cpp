/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 714
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=714
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
void test(val<long long int> var_2, val<bool> var_4, val<long long int> var_7, val<unsigned int> var_8, val<long long int> var_9, val<unsigned long long int> var_12, val<int> zero, val<int*> var_13, val<long long int*> var_14, val<unsigned short*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17, val<unsigned short*> var_18) {
    *var_13 = ((/* implicit */val<int>) (~(((((/* implicit */val<bool>) (+(var_9)))) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))));
    *var_14 = var_2;
    if (var_4)
    {
        *var_15 = ((/* implicit */val<unsigned short>) var_12);
        *var_16 = ((/* implicit */val<unsigned long long int>) var_7);
        *var_17 = ((/* implicit */val<bool>) min((*var_17), (((/* implicit */val<bool>) var_7))));
        *var_18 = ((/* implicit */val<unsigned short>) ((var_2) | (max((var_7), (((/* implicit */val<long long int>) var_8))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1787924971107196055LL;
bool var_4 = (bool)0;
long long int var_7 = 5275713965770869278LL;
unsigned int var_8 = 508893317U;
long long int var_9 = 1807116241214648893LL;
unsigned long long int var_12 = 14177409451466096475ULL;
int zero = 0;
int var_13 = -764170463;
long long int var_14 = 1199102271916721227LL;
unsigned short var_15 = (unsigned short)32578;
unsigned long long int var_16 = 8875749321312680347ULL;
bool var_17 = (bool)0;
unsigned short var_18 = (unsigned short)49800;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -508893318;
    value_mismatch |= var_14 != 1787924971107196055LL;
    value_mismatch |= var_15 != (unsigned short)32578;
    value_mismatch |= var_16 != 8875749321312680347ULL;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (unsigned short)49800;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
