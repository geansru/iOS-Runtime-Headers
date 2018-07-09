/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)_deviceLocalCategory;
+ (id)_keyForDataType:(id)arg1 error:(id*)arg2;
+ (id)achievementStringValueForKey:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)achievementValueForKey:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)achievementValueForKey:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)codableAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)databaseTable;
+ (bool)enumerateAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)removeAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)removeUserDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setAchievementValuesWithDictionary:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setAchievementValuesWithDictionary:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setUserDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id*)arg3 error:(id*)arg4;
+ (id)userDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
