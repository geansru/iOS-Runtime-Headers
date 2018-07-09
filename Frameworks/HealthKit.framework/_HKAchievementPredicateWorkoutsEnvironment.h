/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateWorkoutsEnvironment : _HKBaseAchievementPredicateEnvironment {
    NSArray * __excludedWorkoutUUIDs;
    _HKAchievementPredicateWorkoutEnvironment * _addedWorkout;
    NSArray * _allWorkoutTimeZoneOffsets;
    <_HKAchievementPredicateWorkoutsEnvironmentDataSource> * _dataSource;
    NSArray * _previousAllWorkoutTimeZoneOffsets;
}

@property (setter=_setExcludedWorkoutUUIDs:, nonatomic, retain) NSArray *_excludedWorkoutUUIDs;
@property (nonatomic, retain) _HKAchievementPredicateWorkoutEnvironment *addedWorkout;
@property (nonatomic, retain) NSArray *allWorkoutTimeZoneOffsets;
@property (nonatomic) <_HKAchievementPredicateWorkoutsEnvironmentDataSource> *dataSource;
@property (nonatomic, retain) NSArray *previousAllWorkoutTimeZoneOffsets;

- (void).cxx_destruct;
- (id)_excludedWorkoutUUIDs;
- (void)_setExcludedWorkoutUUIDs:(id)arg1;
- (id)_workoutEnvironmentsFromWorkouts:(id)arg1;
- (id)_workoutsByFilteringExcludedUUIDs:(id)arg1;
- (id)addedWorkout;
- (id)allWorkoutTimeZoneOffsets;
- (double)averageCaloriesBurnedInWorkoutsFromTimeNumber:(id)arg1 toTimeNumber:(id)arg2;
- (id)dataSource;
- (id)previousAllWorkoutTimeZoneOffsets;
- (id)previousBestCaloriesForWorkoutOfType:(id)arg1;
- (void)setAddedWorkout:(id)arg1;
- (void)setAllWorkoutTimeZoneOffsets:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPreviousAllWorkoutTimeZoneOffsets:(id)arg1;
- (id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)workoutsOfType:(id)arg1;

@end
