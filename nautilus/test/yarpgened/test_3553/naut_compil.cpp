/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3553
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3553
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
void test(val<int> zero, val<unsigned int*> var_16, val<unsigned short*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (min((((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) (val<signed char>)-11)) ? (((/* implicit */val<int>) (val<signed char>)5)) : (((/* implicit */val<int>) (val<unsigned char>)4)))), (((/* implicit */val<int>) max(((val<short>)0), (((/* implicit */val<short>) (val<signed char>)35)))))))), (max((max((((/* implicit */val<unsigned int>) (val<unsigned char>)153)), (1171047179U))), (((/* implicit */val<unsigned int>) max(((val<signed char>)11), ((val<signed char>)34))))))))));
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((-1263853324722195607LL), (((/* implicit */val<long long int>) min(((val<unsigned char>)150), ((val<unsigned char>)100))))))) ? (((/* implicit */val<int>) (val<signed char>)-5)) : (((/* implicit */val<int>) (val<short>)2532))));
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) (val<unsigned char>)105)) ? (((/* implicit */val<int>) (val<signed char>)-24)) : (((/* implicit */val<int>) (val<unsigned char>)254)))), (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (val<signed char>)-24)), ((val<unsigned char>)105))))))) ? (((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<int>) (val<signed char>)-7)) : (((/* implicit */val<int>) (val<signed char>)-2)))) : (((/* implicit */val<int>) (val<unsigned short>)50613))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_16 = 233936215U;
unsigned short var_17 = (unsigned short)64448;
long long int var_18 = 346011859693572481LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 5U;
    value_mismatch |= var_17 != (unsigned short)65531;
    value_mismatch |= var_18 != -2LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
