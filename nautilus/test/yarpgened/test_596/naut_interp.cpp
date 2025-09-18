/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 596
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=596
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<unsigned int> var_6, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<unsigned int> var_11, val<unsigned int> var_12, val<long long int> var_13, val<unsigned int> var_14, val<unsigned int> var_15, val<unsigned int> var_16, val<int> zero, val<long long int*> var_17, val<long long int*> var_18, val<long long int*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22) {
    if (((/* implicit */val<bool>) max((var_12), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_7) : (var_10)))) ? (((((/* implicit */val<bool>) var_11)) ? (var_16) : (var_14))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))))))))
    {
        *var_17 -= ((/* implicit */val<long long int>) var_1);
        *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) var_6))));
        *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_13) : (((/* implicit */val<long long int>) var_8))))) ? (var_9) : (((((/* implicit */val<bool>) var_14)) ? (var_10) : (var_6)))))) ? (max((var_16), (max((var_14), (var_4))))) : (((((/* implicit */val<bool>) max((var_11), (var_6)))) ? (((((/* implicit */val<bool>) var_16)) ? (var_9) : (var_2))) : (((((/* implicit */val<bool>) var_2)) ? (var_6) : (var_15)))))));
    }

    *var_20 = ((/* implicit */val<long long int>) var_7);
    *var_21 = ((((((/* implicit */val<bool>) min((var_15), (var_1)))) ? (((((/* implicit */val<bool>) var_2)) ? (var_8) : (var_3))) : (((((/* implicit */val<bool>) var_11)) ? (var_14) : (var_6))))) & (((((/* implicit */val<bool>) (-(var_3)))) ? (((((/* implicit */val<bool>) var_1)) ? (var_12) : (var_12))) : (((((/* implicit */val<bool>) var_15)) ? (var_7) : (var_8))))));
    *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4294967289U)) ? (4575892006952862154LL) : (4575892006952862138LL)))))))) >= (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3543177077720683077LL;
unsigned int var_1 = 4068857337U;
unsigned int var_2 = 1516864130U;
unsigned int var_3 = 2514636234U;
unsigned int var_4 = 158019237U;
unsigned int var_6 = 1112037543U;
unsigned int var_7 = 372513441U;
unsigned int var_8 = 1667479748U;
unsigned int var_9 = 1929980868U;
unsigned int var_10 = 4022000248U;
unsigned int var_11 = 1747214718U;
unsigned int var_12 = 895274394U;
long long int var_13 = -6641094373833950940LL;
unsigned int var_14 = 1605449226U;
unsigned int var_15 = 1402771701U;
unsigned int var_16 = 3998449870U;
int zero = 0;
long long int var_17 = -5713577018754762777LL;
long long int var_18 = 4702955023634984969LL;
long long int var_19 = 5788985089846326234LL;
long long int var_20 = -1711920670097652540LL;
unsigned int var_21 = 3933124927U;
unsigned int var_22 = 3416566250U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -5713577022823620114LL;
    value_mismatch |= var_18 != 4702955023634984969LL;
    value_mismatch |= var_19 != 3998449870LL;
    value_mismatch |= var_20 != 372513441LL;
    value_mismatch |= var_21 != 557877376U;
    value_mismatch |= var_22 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
