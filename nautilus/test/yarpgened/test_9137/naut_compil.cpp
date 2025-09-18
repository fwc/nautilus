/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9137
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9137
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
void test(val<unsigned int> var_4, val<unsigned char> var_5, val<unsigned short> var_7, val<long long int> var_9, val<int> zero, val<long long int*> var_10, val<unsigned char*> var_11) {
    *var_10 |= min((var_9), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 535822336))))));
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((((535822318) << (((((/* implicit */val<int>) var_5)) - (207))))) ^ (((/* implicit */val<int>) var_7))))) : (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 803395951U;
unsigned char var_5 = (unsigned char)210;
unsigned short var_7 = (unsigned short)23478;
long long int var_9 = 6723950146112142919LL;
int zero = 0;
long long int var_10 = -7972102736670962458LL;
unsigned char var_11 = (unsigned char)93;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -7972102736670962458LL;
    value_mismatch |= var_11 != (unsigned char)198;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_9, zero, &var_10, &var_11);
  checksum();
}
