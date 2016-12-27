/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VSIdentityProviderFilter : NSObject {

	BOOL _shouldExcludeUnsupportedProviders;
	NSArray* _allIdentityProviders;
	NSArray* _supportedAccountProviderIDs;

}

@property (nonatomic,copy) NSArray * allIdentityProviders;                            //@synthesize allIdentityProviders=_allIdentityProviders - In the implementation block
@property (nonatomic,copy) NSArray * supportedAccountProviderIDs;                     //@synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeUnsupportedProviders;                  //@synthesize shouldExcludeUnsupportedProviders=_shouldExcludeUnsupportedProviders - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filteredIdentityProviders; 
+(id)keyPathsForValuesAffectingFilteredIdentityProviders;
-(id)init;
-(NSArray *)allIdentityProviders;
-(NSArray *)supportedAccountProviderIDs;
-(BOOL)shouldExcludeUnsupportedProviders;
-(NSArray *)filteredIdentityProviders;
-(void)setAllIdentityProviders:(NSArray *)arg1 ;
-(void)setSupportedAccountProviderIDs:(NSArray *)arg1 ;
-(void)setShouldExcludeUnsupportedProviders:(BOOL)arg1 ;
@end

