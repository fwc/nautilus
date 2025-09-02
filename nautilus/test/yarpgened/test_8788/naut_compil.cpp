/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8788
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8788
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
void test(val<unsigned short> var_0, val<unsigned short> var_3, val<short> var_4, val<unsigned short> var_7, val<unsigned short> var_8, val<unsigned short> var_9, val<short> var_11, val<unsigned short> var_13, val<unsigned short> var_14, val<short> var_15, val<int> zero, val<short*> var_17, val<unsigned short*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_11)), (var_13)))) : (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) (val<short>)-13023)) : (((/* implicit */val<int>) var_9))))))) ? (((((/* implicit */val<bool>) (val<unsigned short>)1773)) ? (((/* implicit */val<int>) (val<unsigned short>)41852)) : (((/* implicit */val<int>) (val<unsigned short>)17205)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)36524)) ? (((/* implicit */val<int>) (val<unsigned short>)21463)) : (((/* implicit */val<int>) (val<short>)2820))))) ? (((/* implicit */val<int>) ((val<unsigned short>) var_8))) : (((/* implicit */val<int>) var_4))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) * (((/* implicit */val<int>) var_13)))))
    {
        *var_18 = min((var_14), (var_7));
        *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31739;
unsigned short var_3 = (unsigned short)51382;
short var_4 = (short)-146;
unsigned short var_7 = (unsigned short)35041;
unsigned short var_8 = (unsigned short)30121;
unsigned short var_9 = (unsigned short)46246;
short var_11 = (short)-6100;
unsigned short var_13 = (unsigned short)23406;
unsigned short var_14 = (unsigned short)10033;
short var_15 = (short)-23763;
int zero = 0;
short var_17 = (short)18690;
unsigned short var_18 = (unsigned short)31005;
short var_19 = (short)16523;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-23684;
    value_mismatch |= var_18 != (unsigned short)10033;
    value_mismatch |= var_19 != (short)30121;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, var_8, var_9, var_11, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
