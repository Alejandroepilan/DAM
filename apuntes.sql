CREATE 
    ALGORITHM = UNDEFINED 
    DEFINER = `alejandro`@`%` 
    SQL SECURITY DEFINER
VIEW `copia_dam_proyecto_navidad`.`ong_view` AS
    SELECT 
        `copia_dam_proyecto_navidad`.`ong`.`ong_id` AS `ong_id`,
        `copia_dam_proyecto_navidad`.`ong`.`name` AS `name`,
        `copia_dam_proyecto_navidad`.`ong_type`.`name` AS `type_name`,
        `copia_dam_proyecto_navidad`.`ong_type`.`icon` AS `type_icon`,
        `copia_dam_proyecto_navidad`.`ong_type`.`link` AS `type_link`,
        `copia_dam_proyecto_navidad`.`ong_country`.`name` AS `country`,
        `copia_dam_proyecto_navidad`.`ong_country`.`code` AS `country_code`,
        `copia_dam_proyecto_navidad`.`ong`.`description` AS `description`,
        `copia_dam_proyecto_navidad`.`ong`.`logo_url` AS `logo_url`,
        `copia_dam_proyecto_navidad`.`ong`.`url` AS `url`
    FROM
        ((`copia_dam_proyecto_navidad`.`ong`
        LEFT JOIN `copia_dam_proyecto_navidad`.`ong_type` ON (`copia_dam_proyecto_navidad`.`ong`.`type_id` = `copia_dam_proyecto_navidad`.`ong_type`.`ong_type_id`))
        LEFT JOIN `copia_dam_proyecto_navidad`.`ong_country` ON (`copia_dam_proyecto_navidad`.`ong`.`country_id` = `copia_dam_proyecto_navidad`.`ong_country`.`ong_country_id`))
