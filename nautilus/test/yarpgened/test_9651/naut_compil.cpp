/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9651
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9651
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
void test(val<unsigned char> var_0, val<short> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_6, val<unsigned long long int> var_9, val<short> var_10, val<unsigned char> var_14, val<unsigned long long int> var_17, val<int> zero, val<int*> var_19, val<unsigned long long int*> var_20, val<short*> var_21, val<unsigned char*> var_22) {
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)227))))) ? (min((min((((/* implicit */val<unsigned long long int>) (val<short>)23217)), (var_9))), (max((var_3), (16041409464445965926ULL))))) : ((~(var_17)))));
    *var_20 = ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned char>)185)))), (((/* implicit */val<int>) ((val<short>) 2143289344)))))) ? (((val<unsigned long long int>) min((var_17), (2405334609263585684ULL)))) : (8614268847881022624ULL));
    *var_21 = ((/* implicit */val<short>) min((((/* implicit */val<int>) var_10)), (min((max((((/* implicit */val<int>) var_2)), (-1760002744))), (((/* implicit */val<int>) var_10))))));
    *var_22 &= ((/* implicit */val<unsigned char>) (~(max((var_6), (16041409464445965926ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
short var_2 = (short)-9363;
unsigned long long int var_3 = 7633640511647152619ULL;
unsigned long long int var_6 = 16872524668331105133ULL;
unsigned long long int var_9 = 10741533373565035312ULL;
short var_10 = (short)32030;
unsigned char var_14 = (unsigned char)62;
unsigned long long int var_17 = 12299656633071970037ULL;
int zero = 0;
int var_19 = -54713610;
unsigned long long int var_20 = 13436026366883441316ULL;
short var_21 = (short)-3003;
unsigned char var_22 = (unsigned char)202;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 23217;
    value_mismatch |= var_20 != 2405334609263585684ULL;
    value_mismatch |= var_21 != (short)-9363;
    value_mismatch |= var_22 != (unsigned char)130;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_9, var_10, var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
