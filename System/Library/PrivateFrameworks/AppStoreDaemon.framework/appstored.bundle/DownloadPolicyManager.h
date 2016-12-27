/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DaemonDatabase, NSMutableDictionary;

@interface DownloadPolicyManager : NSObject {

	DaemonDatabase* _database;
	NSMutableDictionary* _policies;
	NSMutableDictionary* _sizeLimitOverrides;

}

@property (nonatomic,__weak,readonly) DaemonDatabase * daemonDatabase;              //@synthesize database=_database - In the implementation block
-(DaemonDatabase *)daemonDatabase;
-(void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(long long)arg2 ;
-(void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1 ;
-(id)downloadPolicyForID:(long long)arg1 ;
-(id)initWithDaemonDatabase:(id)arg1 ;
-(void)_initializePolicy;
-(void)_addPolicy:(id)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(long long)arg2 ;
-(long long)_sizeLimitForPolicy:(id)arg1 networkType:(long long)arg2 ;
-(BOOL)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(long long)arg2 ;
-(BOOL)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(long long)arg2 ;
-(BOOL)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(long long)arg3 ;
-(long long)addDownloadPolicy:(id)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 ;
-(id)overrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1 ;
-(id)init;
@end

