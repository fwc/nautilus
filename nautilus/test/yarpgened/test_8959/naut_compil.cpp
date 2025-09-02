/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8959
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8959
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
void test(val<unsigned char> var_6, val<unsigned int> var_8, val<long long int> var_9, val<bool> var_12, val<unsigned char> var_14, val<bool> var_15, val<signed char> var_17, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max(((val<bool>)1), (var_15))))) ^ (min((((/* implicit */val<unsigned int>) (val<signed char>)-97)), (var_8)))))), (max((max((((/* implicit */val<long long int>) var_6)), (var_9))), (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned char>) var_17)), (var_14))))))));
    *var_19 = ((/* implicit */val<unsigned short>) (((-(((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) * (-8098299874205273378LL))))) * (max((-8098299874205273378LL), (((/* implicit */val<long long int>) ((369180003U) == (3071771321U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)72;
unsigned int var_8 = 1130814429U;
long long int var_9 = 5744140767616895458LL;
bool var_12 = (bool)0;
unsigned char var_14 = (unsigned char)96;
bool var_15 = (bool)1;
signed char var_17 = (signed char)96;
int zero = 0;
unsigned short var_18 = (unsigned short)9917;
unsigned short var_19 = (unsigned short)26299;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)56284;
    value_mismatch |= var_19 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_9, var_12, var_14, var_15, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
