/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9927
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9927
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<short> var_2, val<unsigned int> var_3, val<short> var_4, val<unsigned long long int> var_5, val<unsigned char> var_6, val<unsigned int> var_7, val<unsigned long long int> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (var_1) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))) ? (var_1) : (((((/* implicit */val<bool>) var_5)) ? (7558422297664925625LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-512)))))))) > (((var_8) | (((/* implicit */val<unsigned long long int>) min((var_9), (2103008879U))))))));
    *var_11 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_0))))), (((((/* implicit */val<bool>) (val<unsigned char>)254)) ? (var_7) : (var_3)))))), (((((/* implicit */val<bool>) ((val<short>) var_0))) ? (max((-7412361483090807922LL), (((/* implicit */val<long long int>) var_4)))) : (((/* implicit */val<long long int>) ((val<unsigned int>) 4294967294U)))))));
    *var_12 = max(((-(0U))), (min((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_7))), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)5932))) : (var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
long long int var_1 = 8180695572032085252LL;
short var_2 = (short)-22866;
unsigned int var_3 = 603058414U;
short var_4 = (short)16988;
unsigned long long int var_5 = 8419650232431862836ULL;
unsigned char var_6 = (unsigned char)197;
unsigned int var_7 = 3615230307U;
unsigned long long int var_8 = 1719464070761287854ULL;
unsigned int var_9 = 1012859804U;
int zero = 0;
unsigned int var_10 = 4129250218U;
unsigned int var_11 = 3248356677U;
unsigned int var_12 = 3611538427U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1U;
    value_mismatch |= var_11 != 16988U;
    value_mismatch |= var_12 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
