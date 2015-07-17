/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDKeyValueSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (int)category;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (void)didReceiveKeysAndValuesWithHealthDaemon:(id)arg1;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (int)nanoSyncObjectType;
+ (long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 healthDaemon:(id)arg5 error:(id*)arg6;
+ (BOOL)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)syncEntityDependencies;
+ (int)syncEntityType;
+ (id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5;

@end