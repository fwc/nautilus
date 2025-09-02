/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8264
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8264
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
void test(val<unsigned short> var_2, val<long long int> var_3, val<bool> var_7, val<signed char> var_10, val<unsigned long long int> var_12, val<bool> var_13, val<short> var_14, val<int> var_15, val<unsigned long long int> var_19, val<int> zero, val<int*> var_20, val<short*> var_21, val<int*> var_22, val<short*> var_23, val<unsigned long long int*> var_24) {
    if (((/* implicit */val<bool>) max((var_12), (max((((/* implicit */val<unsigned long long int>) var_10)), (min((((/* implicit */val<unsigned long long int>) var_2)), (var_19))))))))
    {
        *var_20 &= var_15;
        *var_21 = ((/* implicit */val<short>) max((var_12), (((/* implicit */val<unsigned long long int>) min((max((var_3), (((/* implicit */val<long long int>) var_13)))), (((/* implicit */val<long long int>) var_2)))))));
        *var_22 = ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_12), (((/* implicit */val<unsigned long long int>) var_7)))))))) ^ (((/* implicit */val<int>) var_2)));
        *var_23 = ((/* implicit */val<short>) var_19);
    }

    *var_24 = ((/* implicit */val<unsigned long long int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13862;
long long int var_3 = 9130157408279807982LL;
bool var_7 = (bool)1;
signed char var_10 = (signed char)-68;
unsigned long long int var_12 = 10037672148018357ULL;
bool var_13 = (bool)1;
short var_14 = (short)-17336;
int var_15 = -541664907;
unsigned long long int var_19 = 8887377449527320942ULL;
int zero = 0;
int var_20 = -980707920;
short var_21 = (short)-27821;
int var_22 = -717544167;
short var_23 = (short)-6506;
unsigned long long int var_24 = 17131489583726739310ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -981298896;
    value_mismatch |= var_21 != (short)9397;
    value_mismatch |= var_22 != 13862;
    value_mismatch |= var_23 != (short)-24210;
    value_mismatch |= var_24 != 18446744073709534280ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_10, var_12, var_13, var_14, var_15, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
