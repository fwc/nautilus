/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9134
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9134
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
void test(val<unsigned long long int> var_2, val<short> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<bool> var_8, val<signed char> var_9, val<int> zero, val<signed char*> var_12, val<long long int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) min((*var_12), (((/* implicit */val<signed char>) ((val<unsigned short>) min((((((/* implicit */val<bool>) (val<unsigned short>)55628)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_2))), (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_5)))))))))));
    *var_13 = ((/* implicit */val<long long int>) var_7);
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max(((+(6161598013903726338LL))), (((/* implicit */val<long long int>) var_9))))) || (((/* implicit */val<bool>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)111))) + (var_6))) | (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)22791))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8955659009716246497ULL;
short var_5 = (short)27012;
unsigned long long int var_6 = 8357963026071894756ULL;
unsigned long long int var_7 = 17966382359111736595ULL;
bool var_8 = (bool)1;
signed char var_9 = (signed char)98;
int zero = 0;
signed char var_12 = (signed char)31;
long long int var_13 = 7384294179907953689LL;
short var_14 = (short)10533;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != -480361714597815021LL;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_8, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
}
