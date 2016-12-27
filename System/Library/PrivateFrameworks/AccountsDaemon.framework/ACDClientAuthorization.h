/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACDClient, NSSet, NSDictionary;

@interface ACDClientAuthorization : NSObject {

	BOOL _isGranted;
	ACDClient* _client;
	NSSet* _grantedPermissions;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL isGranted;                          //@synthesize isGranted=_isGranted - In the implementation block
@property (nonatomic,retain) ACDClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSSet * grantedPermissions;              //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(BOOL)isGranted;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSSet *)grantedPermissions;
-(id)initForClient:(id)arg1 ;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
-(void)setIsGranted:(BOOL)arg1 ;
-(ACDClient *)client;
-(void)setClient:(ACDClient *)arg1 ;
@end

