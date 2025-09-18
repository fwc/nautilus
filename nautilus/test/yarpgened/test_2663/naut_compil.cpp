/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2663
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2663
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
void test(val<long long int> var_0, val<short> var_5, val<bool> var_6, val<unsigned char> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) (((+(((/* implicit */val<int>) (val<signed char>)113)))) * (((((/* implicit */val<int>) var_5)) - (((/* implicit */val<int>) (val<signed char>)-32))))))) / (((((var_0) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) var_9))))))));
    *var_19 |= ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8181881283219809855LL;
short var_5 = (short)20193;
bool var_6 = (bool)1;
unsigned char var_9 = (unsigned char)251;
unsigned char var_10 = (unsigned char)149;
int zero = 0;
unsigned short var_18 = (unsigned short)28794;
unsigned long long int var_19 = 1007189941670038167ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 1007189941670038167ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_9, var_10, zero, &var_18, &var_19);
  checksum();
}
