/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8226
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8226
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<unsigned char> var_2, val<bool> var_6, val<bool> var_10, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<int*> var_18, val<unsigned char*> var_19) {
    *var_16 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) min(((~(((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) var_2))))), (((var_1) & (((/* implicit */val<unsigned long long int>) min((-3937271078151884710LL), (-6365692564737619325LL))))))));
    if (((/* implicit */val<bool>) (+(-3937271078151884710LL))))
    {
        *var_17 = ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) ((((val<unsigned long long int>) (val<unsigned short>)2406)) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))))));
        *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned char>) 6492116323288701234LL))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 15532498585672905924ULL))))) : (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((var_1), (((/* implicit */val<unsigned long long int>) 6492116323288701250LL))))))))) : ((-(((var_1) >> (((var_1) - (3548078016229714497ULL)))))))));
    }

    *var_19 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<int>) (val<unsigned short>)61451)), (((((/* implicit */val<bool>) ((val<int>) var_6))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) -6492116323288701235LL)) && (((/* implicit */val<bool>) 16763303012067586342ULL))))) : (((((/* implicit */val<bool>) -6492116323288701224LL)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned long long int var_1 = 3548078016229714540ULL;
unsigned char var_2 = (unsigned char)56;
bool var_6 = (bool)1;
bool var_10 = (bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)116;
unsigned char var_17 = (unsigned char)71;
int var_18 = -320994016;
unsigned char var_19 = (unsigned char)157;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)181;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != -403369;
    value_mismatch |= var_19 != (unsigned char)11;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_6, var_10, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
