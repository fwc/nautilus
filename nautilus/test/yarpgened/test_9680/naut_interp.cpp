/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9680
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
void test(val<signed char> var_1, val<bool> var_3, val<int> var_5, val<long long int> var_7, val<int> var_10, val<signed char> var_11, val<unsigned char> var_15, val<unsigned long long int> var_16, val<int> zero, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<bool*> var_20, val<long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min(((~(((/* implicit */val<int>) (val<signed char>)-65)))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((val<signed char>) var_15))) : (((/* implicit */val<int>) var_3))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (var_16)));
    *var_20 = ((/* implicit */val<bool>) (val<signed char>)-65);
    *var_21 = ((/* implicit */val<long long int>) min((*var_21), (((/* implicit */val<long long int>) max((((val<signed char>) var_1)), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) min(((val<signed char>)65), ((val<signed char>)123)))) == ((-(((/* implicit */val<int>) var_11))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
bool var_3 = (bool)0;
int var_5 = 1016379282;
long long int var_7 = 354631870875173923LL;
int var_10 = 1745139585;
signed char var_11 = (signed char)37;
unsigned char var_15 = (unsigned char)143;
unsigned long long int var_16 = 16439070345114948796ULL;
int zero = 0;
unsigned long long int var_18 = 241983542039255815ULL;
unsigned char var_19 = (unsigned char)231;
bool var_20 = (bool)0;
long long int var_21 = -2258966558417798868LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 18446744073709551503ULL;
    value_mismatch |= var_19 != (unsigned char)35;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != -2258966558417798868LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_10, var_11, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
