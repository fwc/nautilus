/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6851
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6851
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
void test(val<bool> var_0, val<unsigned char> var_3, val<unsigned char> var_5, val<short> var_6, val<short> var_7, val<bool> var_8, val<int> zero, val<bool*> var_10, val<bool*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<bool>) (+(max((((/* implicit */val<int>) var_8)), ((((val<bool>)1) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_3))))))));
    *var_11 = ((/* implicit */val<bool>) var_6);
    *var_12 &= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<short>) ((var_0) ? (12998786369931847391ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))))) | (((/* implicit */val<int>) ((((/* implicit */val<int>) min((((/* implicit */val<short>) var_5)), (var_6)))) >= (((/* implicit */val<int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_3 = (unsigned char)129;
unsigned char var_5 = (unsigned char)156;
short var_6 = (short)16120;
short var_7 = (short)-20537;
bool var_8 = (bool)0;
int zero = 0;
bool var_10 = (bool)1;
bool var_11 = (bool)1;
long long int var_12 = -1161623124209519372LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 9428LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
