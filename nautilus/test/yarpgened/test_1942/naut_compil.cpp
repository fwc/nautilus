/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1942
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1942
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
void test(val<unsigned char> var_2, val<unsigned long long int> var_10, val<long long int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 -= ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) (val<unsigned short>)3)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<unsigned short>)14), ((val<unsigned short>)31))))) : (((((/* implicit */val<bool>) (val<unsigned short>)59962)) ? (-9223372036854775781LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)43952))))))), (max((var_14), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_2)) | (((/* implicit */val<int>) (val<unsigned short>)64392)))))))));
    *var_16 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)255)), (10634730842618708454ULL)))) ? (((/* implicit */val<int>) (val<unsigned short>)14)) : (((/* implicit */val<int>) var_2))))) ? (min((var_10), (min((14541073011068737765ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)30)))))) : ((~(14074433137332872777ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
unsigned long long int var_10 = 4976910822382768315ULL;
long long int var_14 = -3712129128769857666LL;
int zero = 0;
unsigned long long int var_15 = 6245344931063678704ULL;
unsigned long long int var_16 = 5847109186532981249ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 6245344931063678690ULL;
    value_mismatch |= var_16 != 30ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
