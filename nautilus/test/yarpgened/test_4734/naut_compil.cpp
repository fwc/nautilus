/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4734
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4734
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
void test(val<unsigned long long int> var_2, val<bool> var_4, val<unsigned short> var_6, val<unsigned char> var_8, val<int> zero, val<unsigned short*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) (((+(((/* implicit */val<int>) var_4)))) + (((((/* implicit */val<int>) (val<signed char>)39)) - (((/* implicit */val<int>) var_8))))))) : ((+(max((108086391056891904LL), (-108086391056891904LL))))))))));
    *var_15 = ((/* implicit */val<long long int>) max((*var_15), (((/* implicit */val<long long int>) ((((val<bool>) 0U)) ? (((/* implicit */val<unsigned long long int>) 108086391056891904LL)) : (var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15349103353147727791ULL;
bool var_4 = (bool)1;
unsigned short var_6 = (unsigned short)26896;
unsigned char var_8 = (unsigned char)0;
int zero = 0;
unsigned short var_14 = (unsigned short)62433;
long long int var_15 = 1278903481861783703LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)62433;
    value_mismatch |= var_15 != 1278903481861783703LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
