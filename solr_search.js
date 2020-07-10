$(document).ready(function(){
    $("#topcontrol").stop().fadeOut();
	$(window).bind("scroll", function() {
    if ($(this).scrollTop() > 950) {
        $("#topcontrol").show();
		
    } else {
        $("#topcontrol").hide();
    }
});
});
