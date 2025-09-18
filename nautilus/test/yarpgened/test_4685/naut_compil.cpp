/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4685
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4685
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
void test(val<long long int> var_2, val<bool> var_5, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned char*> var_10, val<unsigned char*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) var_2);
    *var_11 = ((/* implicit */val<unsigned char>) var_7);
    *var_12 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_5)), (var_2)))), ((-((-(var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6929019972767256938LL;
bool var_5 = (bool)1;
unsigned long long int var_7 = 14694256080349670219ULL;
unsigned long long int var_8 = 17113628156979977819ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)149;
unsigned char var_11 = (unsigned char)103;
short var_12 = (short)-31957;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)150;
    value_mismatch |= var_11 != (unsigned char)75;
    value_mismatch |= var_12 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
