/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 716
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=716
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
void test(val<signed char> var_0, val<int> var_1, val<int> var_2, val<unsigned short> var_3, val<signed char> var_4, val<unsigned long long int> var_5, val<short> var_7, val<short> var_8, val<bool> var_9, val<int> zero, val<int*> var_10, val<int*> var_11, val<unsigned char*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<int>) max((*var_10), (((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) -1)), (3ULL))))));
    *var_11 = ((/* implicit */val<int>) ((val<unsigned int>) min((((var_9) ? (var_2) : (var_1))), (((/* implicit */val<int>) var_8)))));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) var_1)) : (var_5))), (((/* implicit */val<unsigned long long int>) var_0))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_4), (var_0))))))) : (((/* implicit */val<int>) var_3))));
    *var_13 = ((/* implicit */val<long long int>) ((val<unsigned short>) (val<short>)-32766));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
int var_1 = -819981100;
int var_2 = -171428277;
unsigned short var_3 = (unsigned short)61250;
signed char var_4 = (signed char)-52;
unsigned long long int var_5 = 2780190098140664714ULL;
short var_7 = (short)-9164;
short var_8 = (short)30418;
bool var_9 = (bool)0;
int zero = 0;
int var_10 = -1986445553;
int var_11 = 143314361;
unsigned char var_12 = (unsigned char)13;
long long int var_13 = -5743717161335393294LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3;
    value_mismatch |= var_11 != -819981100;
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != 32770LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
