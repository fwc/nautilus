/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5587
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5587
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
void test(val<bool> var_1, val<unsigned long long int> var_6, val<unsigned int> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned short*> var_11, val<int*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) 9988720917683675341ULL))));
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) max((max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_9))))), (var_8))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_1))))))))));
    *var_13 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_6 = 966969543993076772ULL;
unsigned int var_8 = 1811800054U;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
unsigned short var_11 = (unsigned short)37651;
int var_12 = -1378417381;
long long int var_13 = 6078533179595996401LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)0;
    value_mismatch |= var_12 != -1378417381;
    value_mismatch |= var_13 != 966969543993076772LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
