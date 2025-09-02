/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5286
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5286
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<unsigned short> var_3, val<unsigned long long int> var_4, val<short> var_8, val<unsigned long long int> var_9, val<int> zero, val<bool*> var_10, val<unsigned char*> var_11, val<unsigned int*> var_12, val<unsigned char*> var_13) {
    *var_10 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_8))) & (var_4)));
    *var_11 = ((/* implicit */val<unsigned char>) (val<unsigned short>)20066);
    *var_12 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) != (var_0)))) != (((((/* implicit */val<bool>) var_2)) ? (1329524558) : (((/* implicit */val<int>) (val<unsigned short>)20073)))))) ? (var_9) : (((/* implicit */val<unsigned long long int>) (-((~(((/* implicit */val<int>) var_2)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((val<short>) ((val<int>) (val<unsigned short>)45473))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 134219148U;
unsigned char var_2 = (unsigned char)53;
unsigned short var_3 = (unsigned short)26892;
unsigned long long int var_4 = 10915127746278590406ULL;
short var_8 = (short)27221;
unsigned long long int var_9 = 9996758869738932986ULL;
int zero = 0;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)65;
unsigned int var_12 = 3845453024U;
unsigned char var_13 = (unsigned char)70;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (unsigned char)98;
    value_mismatch |= var_12 != 403065594U;
    value_mismatch |= var_13 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
