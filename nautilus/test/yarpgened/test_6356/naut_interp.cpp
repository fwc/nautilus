/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6356
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6356
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
void test(val<bool> var_1, val<bool> var_2, val<unsigned short> var_5, val<bool> var_6, val<unsigned short> var_7, val<bool> var_8, val<bool> var_10, val<unsigned short> var_14, val<bool> var_15, val<int> zero, val<unsigned short*> var_17, val<bool*> var_18, val<bool*> var_19, val<bool*> var_20) {
    *var_17 = ((/* implicit */val<unsigned short>) ((((max((var_6), (var_1))) ? (((((/* implicit */val<int>) (val<unsigned short>)37783)) * (((/* implicit */val<int>) var_8)))) : (((((/* implicit */val<int>) var_5)) - (((/* implicit */val<int>) var_2)))))) * (((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_1)), ((val<unsigned short>)63132)))) * ((-(((/* implicit */val<int>) var_8))))))));
    if (((/* implicit */val<bool>) max((((/* implicit */val<int>) var_14)), ((+(((((/* implicit */val<int>) (val<unsigned short>)65535)) + (((/* implicit */val<int>) (val<unsigned short>)32768)))))))))
    {
        *var_18 *= ((/* implicit */val<bool>) var_7);
        *var_19 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) <= (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))))));
    }

    *var_20 -= (!(((/* implicit */val<bool>) max((min(((val<unsigned short>)0), (var_5))), (((/* implicit */val<unsigned short>) min((var_15), (var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_2 = (bool)1;
unsigned short var_5 = (unsigned short)54565;
bool var_6 = (bool)1;
unsigned short var_7 = (unsigned short)6604;
bool var_8 = (bool)0;
bool var_10 = (bool)1;
unsigned short var_14 = (unsigned short)21115;
bool var_15 = (bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)35281;
bool var_18 = (bool)1;
bool var_19 = (bool)1;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_7, var_8, var_10, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
