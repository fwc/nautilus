/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5326
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5326
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
void test(val<int> var_0, val<unsigned int> var_1, val<bool> var_2, val<long long int> var_3, val<long long int> var_4, val<unsigned int> var_5, val<bool> var_7, val<int> var_9, val<bool> var_10, val<short> var_11, val<int> zero, val<long long int*> var_12, val<unsigned long long int*> var_13, val<long long int*> var_14, val<long long int*> var_15, val<int*> var_16) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) && (var_7))) && (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_11)) / (((/* implicit */val<int>) (val<short>)24095)))))))) - (((/* implicit */val<int>) ((((983040U) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-125))))) > (((2821031829U) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))))))))
    {
        *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((var_3) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)21902)))))) == (((12253474179908541400ULL) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10)))))))) - (var_0)));
        *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)126)) && (((/* implicit */val<bool>) (val<short>)0))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) - (((((var_9) / (((/* implicit */val<int>) var_11)))) & (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) -902366978524260711LL))))))))))
        {
            *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) != (((((/* implicit */val<long long int>) var_1)) - (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) / (var_4)))))));
            *var_15 = ((/* implicit */val<long long int>) ((((((var_1) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) 902366978524260732LL)) && (((/* implicit */val<bool>) var_0)))))))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((var_3) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))) && (((/* implicit */val<bool>) var_1))))))));
        }

    }

    *var_16 = ((/* implicit */val<int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1903512370;
unsigned int var_1 = 3970637291U;
bool var_2 = (bool)1;
long long int var_3 = 7457826587657206653LL;
long long int var_4 = -817332219388766862LL;
unsigned int var_5 = 180112972U;
bool var_7 = (bool)1;
int var_9 = 209653434;
bool var_10 = (bool)0;
short var_11 = (short)-9592;
int zero = 0;
long long int var_12 = 6496413086785895465LL;
unsigned long long int var_13 = 1395993415055582400ULL;
long long int var_14 = 890242609916045623LL;
long long int var_15 = 6110007114182393959LL;
int var_16 = 2071411387;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 6496413086785895465LL;
    value_mismatch |= var_13 != 1395993415055582400ULL;
    value_mismatch |= var_14 != 890242609916045623LL;
    value_mismatch |= var_15 != 6110007114182393959LL;
    value_mismatch |= var_16 != 1205458290;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
