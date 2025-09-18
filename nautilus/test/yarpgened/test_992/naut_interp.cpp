/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 992
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=992
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
void test(val<int> zero, val<unsigned long long int*> var_10, val<unsigned char*> var_11, val<bool*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned long long int>) (~((~(min((-295876849), (((/* implicit */val<int>) (val<signed char>)85))))))));
    *var_11 ^= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 6344628060296190906ULL)) ? (12102116013413360719ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)0)))))) ? (((((-6488049857337783217LL) + (9223372036854775807LL))) << (((((/* implicit */val<int>) (val<unsigned char>)117)) - (117))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))), ((~(((((/* implicit */val<bool>) (val<signed char>)78)) ? (((/* implicit */val<unsigned long long int>) 4166142945U)) : (12102116013413360719ULL)))))));
    *var_12 = ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 6344628060296190896ULL)) ? (((/* implicit */val<int>) (val<unsigned char>)132)) : (((/* implicit */val<int>) (val<unsigned char>)125))))) ? (max((12102116013413360683ULL), (6174960798904065800ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-96))) - (-6488049857337783217LL)))))), (max((((((/* implicit */val<bool>) (val<signed char>)78)) ? (13879883250723602984ULL) : (4566860822985948621ULL))), (((/* implicit */val<unsigned long long int>) 4166142973U))))));
    *var_13 += ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<short>)17622))))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<signed char>)78)), (-6488049857337783202LL)))) : (6344628060296190906ULL))), (((/* implicit */val<unsigned long long int>) (val<signed char>)75))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_10 = 17915533004691456831ULL;
unsigned char var_11 = (unsigned char)10;
bool var_12 = (bool)0;
long long int var_13 = -2858287556227255283LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18446744073413674767ULL;
    value_mismatch |= var_11 != (unsigned char)20;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != -2858287556227255208LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
