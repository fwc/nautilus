/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6151
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6151
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
void test(val<unsigned short> var_1, val<int> var_3, val<int> var_4, val<bool> var_5, val<long long int> var_6, val<int> var_8, val<int> zero, val<bool*> var_13, val<unsigned int*> var_14, val<long long int*> var_15) {
    if (((/* implicit */val<bool>) (~(var_3))))
    {
        *var_13 = ((/* implicit */val<bool>) ((693747693) & (-693747693)));
        *var_14 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) var_8)), (((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_1)), (var_4)))) ? (var_6) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_5)))))))));
    }

    *var_15 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned long long int>) var_4)), (((val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)1)) | (var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35339;
int var_3 = 453464002;
int var_4 = -2028900021;
bool var_5 = (bool)0;
long long int var_6 = -1181729572806084174LL;
int var_8 = 668317518;
int zero = 0;
bool var_13 = (bool)1;
unsigned int var_14 = 3232437933U;
long long int var_15 = -3227904354243833326LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 4031887794U;
    value_mismatch |= var_15 != 668317519LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_8, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
