/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 30
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=30
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
void test(val<unsigned short> var_6, val<unsigned long long int> var_12, val<int> zero, val<int*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((/* implicit */val<int>) var_6))));
    *var_20 += ((/* implicit */val<long long int>) ((val<int>) max((((/* implicit */val<unsigned long long int>) (val<short>)28296)), (((((/* implicit */val<bool>) 3026189710U)) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)62))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)20284;
unsigned long long int var_12 = 5126630947051657467ULL;
int zero = 0;
int var_19 = 1517320617;
long long int var_20 = -8506837622405917703LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 20284;
    value_mismatch |= var_20 != -8506837621641909004LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_12, zero, &var_19, &var_20);
  checksum();
}
