/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1225
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1225
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
void test(val<bool> var_1, val<signed char> var_2, val<unsigned char> var_3, val<bool> var_5, val<unsigned short> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13) {
    *var_12 = ((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_11)) * (((/* implicit */val<int>) var_1))))) ^ (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) ^ (10329014057066296332ULL)))) ? (6356674357234703256LL) : (((/* implicit */val<long long int>) 1569938150)))));
    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) (((+(((/* implicit */val<int>) var_3)))) ^ (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)198)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<int>) (val<unsigned char>)59)) : ((~(((/* implicit */val<int>) (val<unsigned char>)31)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
signed char var_2 = (signed char)69;
unsigned char var_3 = (unsigned char)118;
bool var_5 = (bool)1;
unsigned short var_11 = (unsigned short)38801;
int zero = 0;
long long int var_12 = 2620966540243410671LL;
signed char var_13 = (signed char)-2;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 6356674357234703256LL;
    value_mismatch |= var_13 != (signed char)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
