/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 838
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=838
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
void test(val<unsigned short> var_2, val<unsigned short> var_4, val<bool> var_5, val<unsigned short> var_6, val<unsigned char> var_7, val<unsigned short> var_8, val<int> zero, val<unsigned char*> var_11, val<unsigned short*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<int>) var_2)) + (((/* implicit */val<int>) var_4)))) : (((((/* implicit */val<int>) var_4)) % (((/* implicit */val<int>) var_5)))))), (((/* implicit */val<int>) var_8))));
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_6), (((/* implicit */val<unsigned short>) var_7))))) ? (((/* implicit */val<int>) ((val<short>) (val<unsigned short>)33410))) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<bool>)1)), (var_8))))))) ? (((/* implicit */val<int>) ((val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)63768)))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_5))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45364;
unsigned short var_4 = (unsigned short)19867;
bool var_5 = (bool)1;
unsigned short var_6 = (unsigned short)13032;
unsigned char var_7 = (unsigned char)150;
unsigned short var_8 = (unsigned short)13677;
int zero = 0;
unsigned char var_11 = (unsigned char)202;
unsigned short var_12 = (unsigned short)39836;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)207;
    value_mismatch |= var_12 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, zero, &var_11, &var_12);
  checksum();
}
