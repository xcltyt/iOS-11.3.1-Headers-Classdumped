/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRSRankingServerKnobs : NSObject {

	BOOL _didGetKnobValues;
	BOOL _use_server_default_score;
	BOOL _text_features_demotion;
	BOOL _cook_sqf;
	BOOL _cook_sqf_topdown;
	BOOL _cook_sqf_fallback_qi_cep;
	long long _cat_score_enum;
	double _device_freq_factor;
	double _glance_support_factor;
	double _device_launch_factor;
	double _server_default_score;
	double _server_score_decrement;
	double _device_expert_factor;
	double _std_dev_threshold;
	double _std_dev_factor;
	double _top_server_score_factor;
	double _device_score_ratio;
	double _min_server_score;
	double _min_server_cep;
	double _min_device_cep;
	double _pseudo_zero_cep;
	double _min_unordered_span;
	long long _user_activity_promotion_threshold;
	long long _text_features_num_chars;
	long long _device_freq_window;
	long long _category_promotion_decay;
	double _category_promotion_count_weight;
	double _category_promotion_last_engaged_weight;
	long long _shortcut_window;
	double _min_coreduet_threshold;

}

@property (assign) BOOL didGetKnobValues;                                      //@synthesize didGetKnobValues=_didGetKnobValues - In the implementation block
@property (assign) long long cat_score_enum;                                   //@synthesize cat_score_enum=_cat_score_enum - In the implementation block
@property (assign) double device_freq_factor;                                  //@synthesize device_freq_factor=_device_freq_factor - In the implementation block
@property (assign) double glance_support_factor;                               //@synthesize glance_support_factor=_glance_support_factor - In the implementation block
@property (assign) double device_launch_factor;                                //@synthesize device_launch_factor=_device_launch_factor - In the implementation block
@property (assign) BOOL use_server_default_score;                              //@synthesize use_server_default_score=_use_server_default_score - In the implementation block
@property (assign) double server_default_score;                                //@synthesize server_default_score=_server_default_score - In the implementation block
@property (assign) double server_score_decrement;                              //@synthesize server_score_decrement=_server_score_decrement - In the implementation block
@property (assign) double device_expert_factor;                                //@synthesize device_expert_factor=_device_expert_factor - In the implementation block
@property (assign) double std_dev_threshold;                                   //@synthesize std_dev_threshold=_std_dev_threshold - In the implementation block
@property (assign) double std_dev_factor;                                      //@synthesize std_dev_factor=_std_dev_factor - In the implementation block
@property (assign) double top_server_score_factor;                             //@synthesize top_server_score_factor=_top_server_score_factor - In the implementation block
@property (assign) double device_score_ratio;                                  //@synthesize device_score_ratio=_device_score_ratio - In the implementation block
@property (assign) double min_server_score;                                    //@synthesize min_server_score=_min_server_score - In the implementation block
@property (assign) double min_server_cep;                                      //@synthesize min_server_cep=_min_server_cep - In the implementation block
@property (assign) double min_device_cep;                                      //@synthesize min_device_cep=_min_device_cep - In the implementation block
@property (assign) double pseudo_zero_cep;                                     //@synthesize pseudo_zero_cep=_pseudo_zero_cep - In the implementation block
@property (assign) double min_unordered_span;                                  //@synthesize min_unordered_span=_min_unordered_span - In the implementation block
@property (assign) long long user_activity_promotion_threshold;                //@synthesize user_activity_promotion_threshold=_user_activity_promotion_threshold - In the implementation block
@property (assign) long long text_features_num_chars;                          //@synthesize text_features_num_chars=_text_features_num_chars - In the implementation block
@property (assign) BOOL text_features_demotion;                                //@synthesize text_features_demotion=_text_features_demotion - In the implementation block
@property (assign) long long device_freq_window;                               //@synthesize device_freq_window=_device_freq_window - In the implementation block
@property (assign) long long category_promotion_decay;                         //@synthesize category_promotion_decay=_category_promotion_decay - In the implementation block
@property (assign) double category_promotion_count_weight;                     //@synthesize category_promotion_count_weight=_category_promotion_count_weight - In the implementation block
@property (assign) double category_promotion_last_engaged_weight;              //@synthesize category_promotion_last_engaged_weight=_category_promotion_last_engaged_weight - In the implementation block
@property (assign) long long shortcut_window;                                  //@synthesize shortcut_window=_shortcut_window - In the implementation block
@property (assign) BOOL cook_sqf;                                              //@synthesize cook_sqf=_cook_sqf - In the implementation block
@property (assign) BOOL cook_sqf_topdown;                                      //@synthesize cook_sqf_topdown=_cook_sqf_topdown - In the implementation block
@property (assign) BOOL cook_sqf_fallback_qi_cep;                              //@synthesize cook_sqf_fallback_qi_cep=_cook_sqf_fallback_qi_cep - In the implementation block
@property (assign) double min_coreduet_threshold;                              //@synthesize min_coreduet_threshold=_min_coreduet_threshold - In the implementation block
-(id)init;
-(void)setDidGetKnobValues:(BOOL)arg1 ;
-(void)setDevice_freq_factor:(double)arg1 ;
-(void)setGlance_support_factor:(double)arg1 ;
-(void)setDevice_launch_factor:(double)arg1 ;
-(void)setUse_server_default_score:(BOOL)arg1 ;
-(void)setServer_default_score:(double)arg1 ;
-(void)setServer_score_decrement:(double)arg1 ;
-(void)setDevice_expert_factor:(double)arg1 ;
-(void)setStd_dev_threshold:(double)arg1 ;
-(void)setStd_dev_factor:(double)arg1 ;
-(void)setTop_server_score_factor:(double)arg1 ;
-(void)setDevice_score_ratio:(double)arg1 ;
-(void)setMin_server_score:(double)arg1 ;
-(void)setMin_server_cep:(double)arg1 ;
-(void)setMin_device_cep:(double)arg1 ;
-(void)setPseudo_zero_cep:(double)arg1 ;
-(void)setMin_unordered_span:(double)arg1 ;
-(void)setText_features_num_chars:(long long)arg1 ;
-(void)setText_features_demotion:(BOOL)arg1 ;
-(void)setDevice_freq_window:(long long)arg1 ;
-(void)setCategory_promotion_decay:(long long)arg1 ;
-(void)setCategory_promotion_count_weight:(double)arg1 ;
-(void)setCategory_promotion_last_engaged_weight:(double)arg1 ;
-(void)setShortcut_window:(long long)arg1 ;
-(void)setUser_activity_promotion_threshold:(long long)arg1 ;
-(void)setCook_sqf:(BOOL)arg1 ;
-(void)setCook_sqf_topdown:(BOOL)arg1 ;
-(void)setCook_sqf_fallback_qi_cep:(BOOL)arg1 ;
-(void)setMin_coreduet_threshold:(double)arg1 ;
-(BOOL)didGetKnobValues;
-(long long)cat_score_enum;
-(void)setCat_score_enum:(long long)arg1 ;
-(double)device_freq_factor;
-(double)glance_support_factor;
-(double)device_launch_factor;
-(BOOL)use_server_default_score;
-(double)server_default_score;
-(double)server_score_decrement;
-(double)device_expert_factor;
-(double)std_dev_threshold;
-(double)std_dev_factor;
-(double)top_server_score_factor;
-(double)device_score_ratio;
-(double)min_server_score;
-(double)min_server_cep;
-(double)min_device_cep;
-(double)pseudo_zero_cep;
-(double)min_unordered_span;
-(long long)user_activity_promotion_threshold;
-(long long)text_features_num_chars;
-(BOOL)text_features_demotion;
-(long long)device_freq_window;
-(long long)category_promotion_decay;
-(double)category_promotion_count_weight;
-(double)category_promotion_last_engaged_weight;
-(long long)shortcut_window;
-(BOOL)cook_sqf;
-(BOOL)cook_sqf_topdown;
-(BOOL)cook_sqf_fallback_qi_cep;
-(double)min_coreduet_threshold;
@end
