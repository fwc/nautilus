/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6958
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
void test(val<signed char> var_0, val<long long int> var_2, val<int> var_3, val<bool> var_5, val<int> var_6, val<bool> var_8, val<signed char> var_10, val<int> zero, val<int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_5))) ? (((/* implicit */val<long long int>) (+(min((((/* implicit */val<int>) var_0)), (var_6)))))) : (min((((/* implicit */val<long long int>) -2147483626)), (3923655235510161857LL)))));
    *var_14 = ((/* implicit */val<int>) ((var_2) | (((var_8) ? (var_2) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (var_6) : (var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
long long int var_2 = 4466604509869394613LL;
int var_3 = -2049436418;
bool var_5 = (bool)1;
int var_6 = 1999718517;
bool var_8 = (bool)0;
signed char var_10 = (signed char)10;
int zero = 0;
int var_13 = -601840933;
int var_14 = -1223451062;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -126;
    value_mismatch |= var_14 != -177419;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_13, &var_14);
  checksum();
}
