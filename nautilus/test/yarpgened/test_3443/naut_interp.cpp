/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3443
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3443
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
void test(val<long long int> var_0, val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<long long int> var_4, val<long long int> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<unsigned long long int> var_11, val<long long int> var_12, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<unsigned long long int*> var_16, val<long long int*> var_17, val<long long int*> var_18) {
    *var_14 = var_0;
    if (((/* implicit */val<bool>) min((var_1), (max((max((((/* implicit */val<unsigned long long int>) var_5)), (var_11))), (min((((/* implicit */val<unsigned long long int>) var_7)), (var_3))))))))
    {
        *var_15 = ((/* implicit */val<long long int>) var_6);
        *var_16 |= max((var_1), (var_11));
        *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_4)), (var_6)))) ? (((((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) var_0)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) var_5)))))) : (max((((/* implicit */val<unsigned long long int>) var_12)), (var_11))))) : (((/* implicit */val<unsigned long long int>) ((val<long long int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) 18446744073709551598ULL))))))));
    }

    *var_18 &= ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4963313132347939615LL;
unsigned long long int var_1 = 612717665056012029ULL;
unsigned long long int var_3 = 14463543761145129626ULL;
long long int var_4 = -8360359862612755265LL;
long long int var_5 = 6964850755452495327LL;
unsigned long long int var_6 = 9886105463175347994ULL;
long long int var_7 = 6340605559057625395LL;
unsigned long long int var_8 = 14062020877656673551ULL;
unsigned long long int var_9 = 15586948024389240530ULL;
unsigned long long int var_11 = 13660141796571115074ULL;
long long int var_12 = 8987912512169734205LL;
int zero = 0;
long long int var_14 = -435540117680018754LL;
long long int var_15 = -1331224623241190934LL;
unsigned long long int var_16 = 661529797257033010ULL;
long long int var_17 = 1780656876693940309LL;
long long int var_18 = 6177670712384947566LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4963313132347939615LL;
    value_mismatch |= var_15 != -8560638610534203622LL;
    value_mismatch |= var_16 != 13672572085192851314ULL;
    value_mismatch |= var_17 != 1LL;
    value_mismatch |= var_18 != 36114868515898476LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
