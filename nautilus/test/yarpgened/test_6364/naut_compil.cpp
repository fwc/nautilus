/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6364
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6364
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
void test(val<bool> var_4, val<unsigned short> var_5, val<bool> var_9, val<long long int> var_10, val<int> zero, val<signed char*> var_15, val<long long int*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_15 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-32749)) ? (-5) : (((/* implicit */val<int>) (val<short>)32749))))) && (((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<short>)30718)))) != (((/* implicit */val<int>) ((val<bool>) var_4)))))));
    *var_16 += ((/* implicit */val<long long int>) var_5);
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((0U), (((/* implicit */val<unsigned int>) (val<unsigned short>)19787))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)-96)) && (((/* implicit */val<bool>) -5))))) : (((/* implicit */val<int>) (val<signed char>)-71))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))));
    *var_18 = ((/* implicit */val<long long int>) min((*var_18), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)119)) / (323217104))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)1;
unsigned short var_5 = (unsigned short)47919;
bool var_9 = (bool)1;
long long int var_10 = -5400819815255318266LL;
int zero = 0;
signed char var_15 = (signed char)-19;
long long int var_16 = -2900112195446088456LL;
unsigned char var_17 = (unsigned char)38;
long long int var_18 = -7148811380647344495LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-19;
    value_mismatch |= var_16 != -2900112195446040537LL;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != -7148811380647344495LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_9, var_10, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
