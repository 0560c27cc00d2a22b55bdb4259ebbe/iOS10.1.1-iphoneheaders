/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, PRPersonaStore, CNUIMeContactMonitor, CNSchedulerProvider;

@interface CNAvatarImageRendererSettings : NSObject {

	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	CNUIMeContactMonitor* _meMonitor;
	CNSchedulerProvider* _schedulerProvider;

}

@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;                     //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) CNSchedulerProvider * schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                        //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                        //@synthesize personaStore=_personaStore - In the implementation block
+(id)settingsWithContactStore:(id)arg1 ;
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 ;
+(id)defaultSettings;
-(CNContactStore *)contactStore;
-(PRPersonaStore *)personaStore;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 ;
-(CNUIMeContactMonitor *)meMonitor;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(CNSchedulerProvider *)schedulerProvider;
-(void)setSchedulerProvider:(CNSchedulerProvider *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

