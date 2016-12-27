/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsCardListView.h>

@interface ACSportsTeamsListView : ACSportsCardListView {

	BOOL _hidePlayerImages;
	BOOL _alwaysUseAthleteFullNames;

}

@property (assign,nonatomic) BOOL hidePlayerImages;                       //@synthesize hidePlayerImages=_hidePlayerImages - In the implementation block
@property (assign,nonatomic) BOOL alwaysUseAthleteFullNames;              //@synthesize alwaysUseAthleteFullNames=_alwaysUseAthleteFullNames - In the implementation block
+(id)domainObjectViewWithDomainObject:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(void)configureDomainObjectView:(id)arg1 withDomainObject:(id)arg2 beforeDomainObject:(id)arg3 afterDomainObject:(id)arg4 league:(id)arg5 index:(unsigned long long)arg6 ;
-(BOOL)hidePlayerImages;
-(BOOL)alwaysUseAthleteFullNames;
-(void)setHidePlayerImages:(BOOL)arg1 ;
-(void)setAlwaysUseAthleteFullNames:(BOOL)arg1 ;
@end

