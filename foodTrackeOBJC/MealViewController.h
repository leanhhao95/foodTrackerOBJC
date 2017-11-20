//
//  MealViewController.h
//  foodTrackeOBJC
//
//  Created by MD103 on 11/20/17.
//  Copyright © 2017 MD103. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface MealViewController : UIViewController<UITextFieldDelegate,UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UITextField *mealNameTextField;

@property (weak, nonatomic) IBOutlet UIImageView *photoImageView;

@end
