/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6133
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6133
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
void test(val<long long int> var_0, val<unsigned short> var_2, val<int> var_4, val<unsigned int> var_5, val<unsigned short> var_6, val<int> zero, val<unsigned char*> var_11, val<bool*> var_12, val<unsigned char*> var_13) {
    *var_11 ^= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 0U)) ? (var_4) : (((/* implicit */val<int>) min((max((((/* implicit */val<unsigned short>) (val<short>)-18768)), ((val<unsigned short>)0))), (((/* implicit */val<unsigned short>) (val<bool>)1)))))));
    *var_12 = ((/* implicit */val<bool>) var_5);
    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) (val<bool>)0)), (((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_2)) | (((/* implicit */val<int>) (val<unsigned short>)60157))))) + (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5712358789219643284LL;
unsigned short var_2 = (unsigned short)64456;
int var_4 = 1094293014;
unsigned int var_5 = 526423747U;
unsigned short var_6 = (unsigned short)2682;
int zero = 0;
unsigned char var_11 = (unsigned char)50;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)99;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)51;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
