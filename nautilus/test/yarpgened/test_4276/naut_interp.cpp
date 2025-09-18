/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4276
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4276
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
void test(val<bool> var_1, val<unsigned char> var_2, val<short> var_7, val<int> zero, val<unsigned long long int*> var_10, val<unsigned long long int*> var_11, val<short*> var_12, val<unsigned long long int*> var_13, val<long long int*> var_14) {
    *var_10 = ((/* implicit */val<unsigned long long int>) max((*var_10), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)0)) != (((/* implicit */val<int>) (val<bool>)1)))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_12 = ((/* implicit */val<short>) var_1);
    *var_13 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)8);
    *var_14 = ((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) max((((/* implicit */val<short>) var_2)), (var_7)))))), ((+(((/* implicit */val<int>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned char var_2 = (unsigned char)113;
short var_7 = (short)-31327;
int zero = 0;
unsigned long long int var_10 = 17236362182315512031ULL;
unsigned long long int var_11 = 9181140345666414818ULL;
short var_12 = (short)-21206;
unsigned long long int var_13 = 14326857950172748659ULL;
long long int var_14 = -3147873153721244203LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 17236362182315512031ULL;
    value_mismatch |= var_11 != 113ULL;
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != 8ULL;
    value_mismatch |= var_14 != -114LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
