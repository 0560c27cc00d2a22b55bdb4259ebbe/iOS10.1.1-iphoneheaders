/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSXPCStoreUtilities : NSObject
+(id)classesForFetchArchive;
+(id)newSecureArchivedDataWithRootObject:(id)arg1 ;
+(id)identifierForStore:(id)arg1 ;
+(id)updateNotificationNameForStore:(id)arg1 ;
+(id)encodableTokenForStore:(id)arg1 queryGenerationToken:(id)arg2 ;
+(void)logMessage:(id)arg1 forComponent:(id)arg2 ;
+(id)classesForErrorArchive;
+(id)classesForSaveArchive;
+(id)classesForPullChangesArchive;
+(id)decodeSecureArchivedData:(id)arg1 usingDelegate:(id)arg2 classes:(id)arg3 ;
+(id)newUserInfoFromException:(id)arg1 ;
+(id)encodeObjectValues:(id)arg1 options:(unsigned long long)arg2 store:(id)arg3 ;
+(id)_decodeResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
@end

