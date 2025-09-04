/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2464
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2464
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
void test(val<unsigned long long int> var_0, val<signed char> var_6, val<short> var_7, val<int> var_8, val<unsigned char> var_9, val<unsigned int> var_10, val<signed char> var_12, val<unsigned char> var_13, val<long long int> var_18, val<bool> var_19, val<int> zero, val<int*> var_20, val<unsigned char*> var_21, val<bool*> var_22, val<unsigned char*> var_23) {
    *var_20 = ((/* implicit */val<int>) var_19);
    *var_21 = var_13;
    *var_22 = ((/* implicit */val<bool>) ((var_0) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) ((524286) + (((/* implicit */val<int>) (val<unsigned char>)255)))))))));
    *var_23 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_7)) + (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_19)) : (((/* implicit */val<int>) var_12))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) < (((/* implicit */val<int>) var_19)))))) : (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_9)), (var_10)))) ? (var_18) : (((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_9)), (-320873054))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13411253190689018378ULL;
signed char var_6 = (signed char)-25;
short var_7 = (short)-16060;
int var_8 = -2125436251;
unsigned char var_9 = (unsigned char)119;
unsigned int var_10 = 2674297364U;
signed char var_12 = (signed char)110;
unsigned char var_13 = (unsigned char)251;
long long int var_18 = 5288037258294843116LL;
bool var_19 = (bool)0;
int zero = 0;
int var_20 = -327540869;
unsigned char var_21 = (unsigned char)235;
bool var_22 = (bool)1;
unsigned char var_23 = (unsigned char)96;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (unsigned char)251;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
